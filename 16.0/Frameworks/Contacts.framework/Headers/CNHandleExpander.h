// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNHANDLEEXPANDER_H
#define CNHANDLEEXPANDER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNHandleExpander : NSObject

@property (retain, nonatomic) NSArray *expandedAddresses; // ivar: _expandedAddresses
@property (retain, nonatomic) NSArray *incomingAddresses; // ivar: _incomingAddresses


+(id)contactStoreForFetchingContacts;
-(id)expandedHandles;
-(id)initWithHandles:(id)arg0 ;
-(void)expandHandles;


@end


#endif