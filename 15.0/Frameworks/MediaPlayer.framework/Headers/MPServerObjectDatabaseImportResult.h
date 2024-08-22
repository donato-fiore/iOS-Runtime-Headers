// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSERVEROBJECTDATABASEIMPORTRESULT_H
#define MPSERVEROBJECTDATABASEIMPORTRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MPServerObjectDatabaseImportResult : NSObject

@property (readonly, nonatomic) id *annotatedPayload; // ivar: _annotatedPayload
@property (readonly, nonatomic) NSArray *playableAssetIdentifiers; // ivar: _playableAssetIdentifiers


-(id)initWithAnnotatedPayload:(id)arg0 playableAssetIdentifiers:(id)arg1 ;


@end


#endif