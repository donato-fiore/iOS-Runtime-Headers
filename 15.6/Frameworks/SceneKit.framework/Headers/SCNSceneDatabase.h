// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNSCENEDATABASE_H
#define SCNSCENEDATABASE_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCNSceneDatabase : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_db;
}




+(BOOL)supportsSecureCoding;
+(id)lookUpKeyForObjectNamed:(id)arg0 class:(Class)arg1 ;
+(id)sceneDatabase;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addInstance:(id)arg0 withName:(id)arg1 class:(Class)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif