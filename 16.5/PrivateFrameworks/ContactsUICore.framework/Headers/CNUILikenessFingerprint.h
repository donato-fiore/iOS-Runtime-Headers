// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUILIKENESSFINGERPRINT_H
#define CNUILIKENESSFINGERPRINT_H

@protocol NSCopying, _CNUILikenessFingerprintImpl;

#import <Foundation/Foundation.h>


@interface CNUILikenessFingerprint : NSObject <NSCopying>

 {
    id<_CNUILikenessFingerprintImpl> *_impl;
}




+(id)fingerprintForContact:(id)arg0 ;
+(id)fingerprintForContactIdentifier:(id)arg0 ;
+(id)fingerprintForContacts:(id)arg0 scope:(id)arg1 ;
+(id)fingerprintForData:(id)arg0 ;
+(id)fingerprintForScope:(id)arg0 ;
+(id)implForContact:(id)arg0 ;
+(id)publicFingerprintForContact:(id)arg0 ;
+(id)publicFingerprintForContacts:(id)arg0 scope:(id)arg1 ;
-(BOOL)hasContactIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContacts:(id)arg0 badges:(id)arg1 scope:(id)arg2 ;
-(id)initWithImpl:(id)arg0 ;


@end


#endif