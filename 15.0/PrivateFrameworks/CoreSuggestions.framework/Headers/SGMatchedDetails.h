// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMATCHEDDETAILS_H
#define SGMATCHEDDETAILS_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGMatchedDetails : NSObject <NSCopying, NSSecureCoding>

 {
    NSDictionary *_tokenDetailMap;
    NSDictionary *_detailTokenMap;
}




+(BOOL)supportsSecureCoding;
+(NSInteger)tokenMatchedDetailTypeForContact:(id)arg0 contactEntityId:(id)arg1 detailEntityId:(id)arg2 matchedDetailReader:(id)arg3 phraseNumber:(unsigned int)arg4 token:(id)arg5 ;
+(NSInteger)tokenMatchedDetailTypeForContact:(id)arg0 matchedDetailReader:(id)arg1 phraseNumber:(unsigned int)arg2 token:(id)arg3 ;
+(NSInteger)tokensMatchedDetailTypeForContact:(id)arg0 contactEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3 tokens:(id)arg4 ;
+(id)matchedDetailsWithContact:(id)arg0 matchinfoData:(id)arg1 tokens:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMatchedDetails:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 matchinfoData:(id)arg1 tokens:(id)arg2 ;
-(id)matchedDetailsForToken:(id)arg0 ;
-(id)tokensForDetail:(id)arg0 ;
-(void)_addToTokenDetailMap:(id)arg0 token:(id)arg1 detail:(id)arg2 ;
-(void)_initilizeDictionariesFromTokenDetailMap:(id)arg0 ;
-(void)_processRawData:(id)arg0 tokens:(id)arg1 contact:(id)arg2 tokenDetailMap:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif