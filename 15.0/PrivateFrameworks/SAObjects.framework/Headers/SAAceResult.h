// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAACERESULT_H
#define SAACERESULT_H

@class NSString;
@protocol SAAceSerializable;


#import "SABaseAceObject.h"

@interface SAAceResult : SABaseAceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SAAceSerializable> *result;
@property (readonly) Class superclass;


+(id)aceResult;
+(id)aceResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif