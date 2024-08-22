// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSUWEAKREFERENCE_H
#define OITSUWEAKREFERENCE_H


#import <Foundation/Foundation.h>


@interface OITSUWeakReference : NSObject

@property (readonly, nonatomic) id *object; // ivar: mObject


+(id)weakReferenceWithObject:(id)arg0 ;
-(id)init;
-(id)initWithObject:(id)arg0 ;
-(void)dealloc;


@end


#endif