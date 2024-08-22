// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HVDATASOURCECONTENTSTATE_H
#define HVDATASOURCECONTENTSTATE_H

@class NSString, NSData, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HVDataSourceContentState : NSObject {
    NSString *_path;
    NSData *_fileContentsHash;
}


@property (readonly, nonatomic) unsigned int dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSMutableDictionary *deferredContentStates; // ivar: _deferredContentStates


+(BOOL)deleteStateForDataSource:(unsigned int)arg0 basePath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)saveStateWithError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDataSource:(unsigned int)arg0 basePath:(id)arg1 ;


@end


#endif