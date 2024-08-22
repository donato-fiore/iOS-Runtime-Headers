// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRCLIENTDIAGNOSTICSDATASOURCE_H
#define MRCLIENTDIAGNOSTICSDATASOURCE_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MRClientDiagnosticsDataSource : NSObject

@property (readonly, nonatomic) NSString *diagnostic;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSMutableDictionary *map; // ivar: _map


+(id)sharedDataSource;
-(id)init;
-(void)add:(id)arg0 ;
-(void)remove:(id)arg0 ;


@end


#endif