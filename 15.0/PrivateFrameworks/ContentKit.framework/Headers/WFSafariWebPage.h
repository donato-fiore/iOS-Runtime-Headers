// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSAFARIWEBPAGE_H
#define WFSAFARIWEBPAGE_H

@class NSURL, NSString, NSData;
@protocol NSCopying, WFNaming, WFSerializableContent;

#import <Foundation/Foundation.h>


@interface WFSafariWebPage : NSObject <NSCopying, WFNaming, WFSerializableContent>



@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSData *documentHTML; // ivar: _documentHTML
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *javaScriptRunnerIdentifier; // ivar: _javaScriptRunnerIdentifier
@property (readonly, copy, nonatomic) NSString *pageTitle; // ivar: _pageTitle
@property (readonly, copy, nonatomic) NSData *selectionHTML; // ivar: _selectionHTML
@property (readonly, copy, nonatomic) NSString *selectionText; // ivar: _selectionText
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *wfName;


+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)webPageFromPreprocessingResult:(id)arg0 javaScriptRunnerIdentifier:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithURL:(id)arg0 pageTitle:(id)arg1 selectionText:(id)arg2 selectionHTML:(id)arg3 documentHTML:(id)arg4 javaScriptRunnerIdentifier:(id)arg5 ;
-(id)wfSerializedRepresentation;


@end


#endif