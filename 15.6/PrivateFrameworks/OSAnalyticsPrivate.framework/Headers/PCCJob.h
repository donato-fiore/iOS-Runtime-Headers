// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCCJOB_H
#define PCCJOB_H

@class OSALog, NSError, NSString, NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface PCCJob : NSObject {
    OSALog *_package;
    NSError *_errObj;
}


@property (readonly) NSString *event; // ivar: _event
@property (readonly) NSString *jid; // ivar: _jid
@property (readonly) NSDate *lastTouch; // ivar: _lastTouch
@property (readonly) NSDictionary *metadata; // ivar: _metadata
@property (readonly) NSString *nextFilepath;
@property (readonly) NSDictionary *options; // ivar: _options
@property (readonly) id *result;
@property (readonly) NSString *target; // ivar: _target
@property (readonly) NSString *type; // ivar: _type


-(id)description;
-(id)initWithID:(id)arg0 forTarget:(id)arg1 options:(id)arg2 ;
-(id)initWithID:(id)arg0 forTarget:(id)arg1 options:(id)arg2 forFile:(id)arg3 ;
-(void)packageLog:(id)arg0 forRouting:(id)arg1 info:(id)arg2 options:(id)arg3 ;
-(void)registerResult:(BOOL)arg0 error:(id)arg1 ;


@end


#endif