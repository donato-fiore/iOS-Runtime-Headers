// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKCONTAINERMIGRATOR_H
#define MKCONTAINERMIGRATOR_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface MKContainerMigrator : NSObject {
    NSMutableDictionary *_containers;
}


@property (retain, nonatomic) NSDictionary *signatures; // ivar: _signatures


-(id)init;
-(void)import:(id)arg0 signature:(id)arg1 chunk:(id)arg2 filename:(id)arg3 offset:(NSUInteger)arg4 length:(NSUInteger)arg5 total:(NSUInteger)arg6 required:(BOOL)arg7 excludedFromBackup:(BOOL)arg8 ;
-(void)importContainer:(id)arg0 signature:(id)arg1 chunk:(id)arg2 filename:(id)arg3 offset:(NSUInteger)arg4 length:(NSUInteger)arg5 total:(NSUInteger)arg6 required:(BOOL)arg7 excludedFromBackup:(BOOL)arg8 ;


@end


#endif