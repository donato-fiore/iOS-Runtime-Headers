// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPCOLLABORATIONHANDLE_H
#define LPCOLLABORATIONHANDLE_H

@class NSString, NSPersonNameComponents;

#import <Foundation/Foundation.h>


@interface LPCollaborationHandle : NSObject

@property (copy, nonatomic) NSString *handle; // ivar: _handle
@property (retain, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithHandle:(id)arg0 nameComponents:(id)arg1 ;
-(id)stringValue;


@end


#endif