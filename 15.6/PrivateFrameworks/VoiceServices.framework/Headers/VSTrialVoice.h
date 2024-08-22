// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSTRIALVOICE_H
#define VSTRIALVOICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSTrialVoice : NSObject

@property (nonatomic) NSUInteger assetSize; // ivar: _assetSize
@property (nonatomic) NSInteger compatibilityVersion; // ivar: _compatibilityVersion
@property (nonatomic) NSInteger footprint; // ivar: _footprint
@property (nonatomic) NSInteger gender; // ivar: _gender
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) NSUInteger version; // ivar: _version


-(BOOL)isLocal;
-(CGFloat)preferenceScore;
-(id)description;
-(id)factorName;
-(id)initWithFactorLevel:(id)arg0 ;
-(id)initWithFactorName:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 name:(id)arg1 ;


@end


#endif