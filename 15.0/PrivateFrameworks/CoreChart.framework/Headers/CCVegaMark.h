// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCVEGAMARK_H
#define CCVEGAMARK_H

@class JSValue, CALayer, NSString;
@protocol CCVegaMarkInterface;

#import <Foundation/Foundation.h>


@interface CCVegaMark : NSObject <CCVegaMarkInterface>

 {
    JSValue *_items;
}


@property (retain, nonatomic) CALayer *caLayer;
@property (readonly, nonatomic) BOOL clip;
@property (readonly, nonatomic) BOOL interactive;
@property (nonatomic) BOOL isDirty;
@property (readonly, nonatomic) NSUInteger itemCount;
@property (retain) JSValue *mark; // ivar: mark
@property (readonly, nonatomic) NSString *marktype;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) CGFloat zindex;


-(BOOL)isEqual:(id)arg0 ;
-(id)getString:(id)arg0 defaultValue:(id)arg1 ;
-(id)initWithJSValue:(id)arg0 ;
-(id)itemAtIndex:(NSUInteger)arg0 ;


@end


#endif