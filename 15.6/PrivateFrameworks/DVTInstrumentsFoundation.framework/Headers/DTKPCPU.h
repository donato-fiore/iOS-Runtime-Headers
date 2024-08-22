// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTKPCPU_H
#define DTKPCPU_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface DTKPCPU : NSObject {
    *kpep_db _kpepDB;
    NSString *_lookupName;
}


@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (readonly, retain, nonatomic) NSString *name; // ivar: _name


+(id)cpuNamed:(id)arg0 fromSerializedData:(id)arg1 error:(*id)arg2 ;
+(id)localCPU:(*id)arg0 ;
+(void)initialize;
-(id)_fixupAlias:(id)arg0 ;
-(id)allAliasAndNameStrings;
-(id)description;
-(id)eventFromName:(id)arg0 ;
-(id)eventFromNameOrAlias:(id)arg0 ;
-(id)initWithName:(id)arg0 database:(struct kpep_db *)arg1 ;
-(struct kpep_db *)kpepDB;
-(void)dealloc;


@end


#endif