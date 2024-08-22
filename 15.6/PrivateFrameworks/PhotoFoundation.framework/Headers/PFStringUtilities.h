// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFSTRINGUTILITIES_H
#define PFSTRINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface PFStringUtilities : NSObject



+(BOOL)isValidHexString:(id)arg0 ;
+(char *)safeCString:(id)arg0 ;
+(id)LTRString:(id)arg0 ;
+(id)base64ToHexMapForBase64Strings:(id)arg0 ;
+(id)base64ToHexMapForHexStrings:(id)arg0 ;
+(id)dataForBase64String:(id)arg0 ;
+(id)dataForHexString:(id)arg0 ;
+(id)descriptionForMachTimeInterval:(NSUInteger)arg0 ;
+(id)descriptionForNSInterval:(NSUInteger)arg0 ;
+(id)descriptionForTimeInterval:(CGFloat)arg0 ;
+(id)hexStringForData:(id)arg0 ;
+(id)hexToBase64MapForBase64Strings:(id)arg0 ;
+(id)hexToBase64MapForHexStrings:(id)arg0 ;
+(id)mapCollection:(id)arg0 transformation:(id)arg1 ;
+(id)stringByRemovingInvalidXMLCharactersFromString:(id)arg0 ;


@end


#endif