// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNHANDLESTRINGSCLASSIFICATIONBUILDER_H
#define CNHANDLESTRINGSCLASSIFICATIONBUILDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CNHandleStringsClassificationBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *emailAddresses; // ivar: _emailAddresses
@property (retain, nonatomic) NSMutableArray *phoneNumbers; // ivar: _phoneNumbers
@property (retain, nonatomic) NSMutableArray *unknown; // ivar: _unknown


-(id)build;
-(id)init;
-(void)addEmailAddress:(id)arg0 ;
-(void)addPhoneNumber:(id)arg0 ;
-(void)addUnknown:(id)arg0 ;


@end


#endif