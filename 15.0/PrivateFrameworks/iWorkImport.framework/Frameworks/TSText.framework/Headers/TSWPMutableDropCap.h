// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPMUTABLEDROPCAP_H
#define TSWPMUTABLEDROPCAP_H



#import "TSWPDropCap.h"

@interface TSWPMutableDropCap : TSWPDropCap

@property (nonatomic) CGFloat characterScale;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) NSInteger dropCapType;
@property (nonatomic) NSUInteger numberOfCharacters;
@property (nonatomic) NSUInteger numberOfLines;
@property (nonatomic) NSUInteger numberOfRaisedLines;
@property (nonatomic) CGFloat outdent;
@property (nonatomic) CGFloat padding;
@property (nonatomic) BOOL shapeEnabled;
@property (nonatomic) NSInteger wrapType;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setPropertiesFromDropCap:(id)arg0 ;


@end


#endif