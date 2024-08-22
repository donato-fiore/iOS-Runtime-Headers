// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDOCUMENTSECTIONBLUEPRINT_H
#define SXDOCUMENTSECTIONBLUEPRINT_H

@class NSString, NSArray;
@protocol SXDocumentSectionBlueprint;

#import <Foundation/Foundation.h>


@interface SXDocumentSectionBlueprint : NSObject <SXDocumentSectionBlueprint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly) Class superclass;


+(id)blueprintWithItems:(id)arg0 ;


@end


#endif