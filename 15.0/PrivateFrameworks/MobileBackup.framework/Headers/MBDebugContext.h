// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MBDEBUGCONTEXT_H
#define MBDEBUGCONTEXT_H

@class NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface MBDebugContext : NSObject {
    NSMutableDictionary *_dictionary;
}


@property (retain, nonatomic) NSDate *simulatedDate;
@property (readonly, nonatomic) NSInteger time;


+(id)defaultDebugContext;
-(BOOL)boolForName:(id)arg0 ;
-(BOOL)eval:(id)arg0 ;
-(BOOL)isFlagSet:(id)arg0 ;
-(id)description;
-(id)init;
-(id)performSelectorForName:(id)arg0 ;
-(id)performSelectorForName:(id)arg0 withObject:(id)arg1 ;
-(id)valueForName:(id)arg0 ;
-(int)intForName:(id)arg0 ;
-(void)dealloc;
-(void)removeValueForName:(id)arg0 ;
-(void)setBool:(BOOL)arg0 forName:(id)arg1 ;
-(void)setDelegate:(id)arg0 andSelector:(SEL)arg1 forName:(id)arg2 ;
-(void)setFlag:(id)arg0 ;
-(void)setInt:(int)arg0 forName:(id)arg1 ;
-(void)setValue:(id)arg0 forName:(id)arg1 ;


@end


#endif