// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDOCUMENTLAYOUT_H
#define SXDOCUMENTLAYOUT_H

@class NSString;
@protocol SXDocumentLayout;

#import <Foundation/Foundation.h>


@interface SXDocumentLayout : NSObject <SXDocumentLayout>



@property (readonly, nonatomic) NSUInteger columns; // ivar: _columns
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger gutter; // ivar: _gutter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger margin; // ivar: _margin
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger width; // ivar: _width


-(id)initWithWidth:(NSInteger)arg0 margin:(NSInteger)arg1 gutter:(NSInteger)arg2 columns:(NSUInteger)arg3 ;


@end


#endif