// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCOMPOSITEEDITORIALLAYOUTSPEC_H
#define PXCOMPOSITEEDITORIALLAYOUTSPEC_H

@class NSMapTable, NSArray;

#import <Foundation/Foundation.h>


@interface PXCompositeEditorialLayoutSpec : NSObject

@property (readonly, nonatomic) NSInteger maxNumberOfRects; // ivar: _maxNumberOfRects
@property (readonly, nonatomic) NSInteger minNumberOfColumns; // ivar: _minNumberOfColumns
@property (readonly, nonatomic) NSInteger minNumberOfRects; // ivar: _minNumberOfRects
@property (readonly, nonatomic) NSMapTable *preferredNextTemplatesByCurrentTemplate; // ivar: _preferredNextTemplatesByCurrentTemplate
@property (readonly, nonatomic) NSArray *templates; // ivar: _templates


+(id)defaultSpec;
-(id)_init;
-(id)init;
-(id)preferredNextTemplatesForTemplate:(id)arg0 ;
-(void)prepareBuiltinSpec;


@end


#endif