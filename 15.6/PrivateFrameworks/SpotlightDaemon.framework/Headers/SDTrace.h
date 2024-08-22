// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SDTRACE_H
#define SDTRACE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SDTrace : NSObject {
    SDTraceItem" _items;
}


@property (readonly, nonatomic) int current; // ivar: _current
@property (retain, nonatomic) NSString *title; // ivar: _title


+(void)initialize;
-(NSInteger)addLabel:(id)arg0 identifier:(NSInteger)arg1 duration:(CGFloat)arg2 string:(id)arg3 data:(id)arg4 ;
-(id)description;
-(id)init;
-(id)initWithTitle:(id)arg0 ;
-(id)items;


@end


#endif