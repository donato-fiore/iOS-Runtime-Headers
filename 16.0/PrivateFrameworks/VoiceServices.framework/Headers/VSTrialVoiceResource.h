// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSTRIALVOICERESOURCE_H
#define VSTRIALVOICERESOURCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSTrialVoiceResource : NSObject

@property (copy, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (nonatomic) NSUInteger version; // ivar: _version


-(BOOL)isLocal;
-(id)factorName;
-(id)initWithFactorLevel:(id)arg0 ;
-(id)initWithFactorName:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 ;


@end


#endif