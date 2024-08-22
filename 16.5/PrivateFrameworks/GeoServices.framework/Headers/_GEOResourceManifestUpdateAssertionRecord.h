// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEORESOURCEMANIFESTUPDATEASSERTIONRECORD_H
#define _GEORESOURCEMANIFESTUPDATEASSERTIONRECORD_H

@class NSString;
@protocol GEOResourceManifestUpdateAssertionRecord;

#import <Foundation/Foundation.h>


@interface _GEOResourceManifestUpdateAssertionRecord : NSObject <GEOResourceManifestUpdateAssertionRecord>



@property (readonly, nonatomic) CGFloat creationTimestamp; // ivar: _creationTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *process; // ivar: _process
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)init;
-(id)initWithProcess:(id)arg0 reason:(id)arg1 creationTimestamp:(CGFloat)arg2 ;


@end


#endif