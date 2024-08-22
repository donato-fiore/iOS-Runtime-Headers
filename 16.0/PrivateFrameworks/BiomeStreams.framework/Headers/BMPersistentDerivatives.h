// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPERSISTENTDERIVATIVES_H
#define BMPERSISTENTDERIVATIVES_H

@class BMBookmarkablePublisher, NSString, BPSPublisher, NSURL;



@interface BMPersistentDerivatives : BMBookmarkablePublisher

@property (readonly, nonatomic) NSString *streamName; // ivar: _streamName
@property (readonly, nonatomic) NSString *tableName; // ivar: _tableName
@property (readonly, nonatomic) BPSPublisher *upstream; // ivar: _upstream
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)init;
-(id)initWithUpstream:(id)arg0 derivativeDatabaseURL:(id)arg1 derivedTableName:(id)arg2 ;
-(void)subscribe:(id)arg0 ;


@end


#endif