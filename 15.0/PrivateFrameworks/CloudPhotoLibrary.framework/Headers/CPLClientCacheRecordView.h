// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLCLIENTCACHERECORDVIEW_H
#define CPLCLIENTCACHERECORDVIEW_H

@protocol CPLEngineIDMapping;


#import "CPLRecordView.h"
#import "CPLScopedIdentifier.h"
#import "CPLRecordChange.h"

@interface CPLClientCacheRecordView : CPLRecordView {
    CPLScopedIdentifier *_localScopedIdentifier;
}


@property (readonly, nonatomic) CPLRecordChange *cloudRecord; // ivar: _cloudRecord
@property (readonly, nonatomic) NSObject<CPLEngineIDMapping> *idMapping; // ivar: _idMapping
@property (readonly, nonatomic) CPLScopedIdentifier *localScopedIdentifier;


-(BOOL)supportsResources;
-(Class)recordClass;
-(id)description;
-(id)initWithLocalScopedIdentifier:(id)arg0 cloudRecord:(id)arg1 idMapping:(id)arg2 ;
-(id)recordChangeData;
-(id)redactedDescription;
-(id)relatedScopedIdentifier;
-(id)relation;
-(id)scopedIdentifier;
-(id)secondaryScopedIdentifier;
-(id)synthesizedRecord;


@end


#endif