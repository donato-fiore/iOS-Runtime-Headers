// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDATATABLETEXTSOURCEFACTORY_H
#define SXDATATABLETEXTSOURCEFACTORY_H

@class NSString;
@protocol SXDataTableTextSourceFactory, SXDocumentLanguageProviding, SXFontAttributesConstructor, SXSmartFieldFactory;

#import <Foundation/Foundation.h>


@interface SXDataTableTextSourceFactory : NSObject <SXDataTableTextSourceFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentLanguageProviding> *documentLanguageProvider; // ivar: _documentLanguageProvider
@property (readonly, nonatomic) NSObject<SXFontAttributesConstructor> *fontAttributesConstructor; // ivar: _fontAttributesConstructor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXSmartFieldFactory> *smartFieldFactory; // ivar: _smartFieldFactory
@property (readonly) Class superclass;


-(id)initWithSmartFieldFactory:(id)arg0 documentLanguageProvider:(id)arg1 fontAttributesConstructor:(id)arg2 ;
-(id)textSourceWithFormattedText:(id)arg0 indexPath:(struct ? )arg1 dataSource:(id)arg2 ;


@end


#endif