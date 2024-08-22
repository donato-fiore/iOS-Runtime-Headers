// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSSYNTHESISVOICE_H
#define SIRITTSSYNTHESISVOICE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriTTSSynthesisVoice : NSObject <NSSecureCoding>

 {
    ? language;
    ? name;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic) NSInteger footprint; // ivar: footprint
@property (nonatomic) NSInteger gender; // ivar: gender
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) NSInteger type; // ivar: type
@property (nonatomic) NSInteger version; // ivar: version


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 name:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif