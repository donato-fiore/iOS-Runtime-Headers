// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLUTIANALYZER_H
#define QLUTIANALYZER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLUTIAnalyzer : NSObject <NSSecureCoding>



@property (readonly) NSString *contentType; // ivar: _contentType


+(BOOL)isTypeAudioOnly:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)UTIForURL:(id)arg0 ;
+(id)knownExtensions;
+(id)privateUTIFromFileName:(id)arg0 ;
+(id)removeSpacesFromString:(id)arg0 ;
-(BOOL)isAudioOnly;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentType:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif