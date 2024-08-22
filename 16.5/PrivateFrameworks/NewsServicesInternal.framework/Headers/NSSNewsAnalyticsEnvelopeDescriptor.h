// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSNEWSANALYTICSENVELOPEDESCRIPTOR_H
#define NSSNEWSANALYTICSENVELOPEDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSSNewsAnalyticsEnvelopeDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) int contentType; // ivar: _contentType
@property (readonly, nonatomic) int contentTypeMinorVersion; // ivar: _contentTypeMinorVersion
@property (readonly, nonatomic) int contentTypePatchVersion; // ivar: _contentTypePatchVersion
@property (readonly, nonatomic) int contentTypeVersion; // ivar: _contentTypeVersion


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithContentType:(int)arg0 contentTypeVersion:(int)arg1 contentTypeMinorVersion:(int)arg2 contentTypePatchVersion:(int)arg3 ;


@end


#endif