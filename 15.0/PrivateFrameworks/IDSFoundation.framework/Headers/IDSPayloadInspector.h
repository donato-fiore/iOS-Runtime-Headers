// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSPAYLOADINSPECTOR_H
#define IDSPAYLOADINSPECTOR_H


#import <Foundation/Foundation.h>


@interface IDSPayloadInspector : NSObject



+(NSInteger)validateData:(id)arg0 messageGuid:(id)arg1 ;
+(NSInteger)validateString:(id)arg0 messageGuid:(id)arg1 ;
+(void)enforceSecurityError:(NSInteger)arg0 messageGuid:(id)arg1 ;
+(void)inspectPayload:(id)arg0 messageGuid:(id)arg1 ;


@end


#endif