// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSTRIALQUERY_H
#define DDSTRIALQUERY_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DDSTrialQuery : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_description;
}


@property (readonly) unsigned int namespaceId; // ivar: _namespaceId
@property (readonly) int projectId; // ivar: _projectId


+(BOOL)supportsSecureCoding;
+(id)defaultQuery;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProjectId:(int)arg0 namespaceId:(unsigned int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif