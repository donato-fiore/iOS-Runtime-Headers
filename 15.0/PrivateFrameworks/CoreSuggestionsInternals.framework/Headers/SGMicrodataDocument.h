// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMICRODATADOCUMENT_H
#define SGMICRODATADOCUMENT_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SGMicrodataDocument : NSObject

@property (readonly, nonatomic) NSDictionary *htmlIds; // ivar: _htmlIds
@property (readonly, nonatomic) NSArray *items; // ivar: _items


-(id)asJsonLd;
-(id)init;
-(id)jsonLdForItem:(id)arg0 ;
-(void)addItem:(id)arg0 ;
-(void)setHtmlIdItemScope:(id)arg0 forHtmlId:(id)arg1 ;


@end


#endif