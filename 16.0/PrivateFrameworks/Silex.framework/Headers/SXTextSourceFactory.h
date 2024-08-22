// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXTEXTSOURCEFACTORY_H
#define SXTEXTSOURCEFACTORY_H

@class NSString;
@protocol SXTextSourceFactory, SXDocumentLanguageProviding, SXFontAttributesConstructor, SXSmartFieldFactory;

#import <Foundation/Foundation.h>


@interface SXTextSourceFactory : NSObject <SXTextSourceFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentLanguageProviding> *documentLanguageProvider; // ivar: _documentLanguageProvider
@property (readonly, nonatomic) NSObject<SXFontAttributesConstructor> *fontAttributesConstructor; // ivar: _fontAttributesConstructor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXSmartFieldFactory> *smartFieldFactory; // ivar: _smartFieldFactory
@property (readonly) Class superclass;


-(id)createTextSourceWithString:(id)arg0 dataSource:(id)arg1 ;
-(id)initWithSmartFieldFactory:(id)arg0 documentLanguageProvider:(id)arg1 fontAttributesConstructor:(id)arg2 ;


@end


#endif