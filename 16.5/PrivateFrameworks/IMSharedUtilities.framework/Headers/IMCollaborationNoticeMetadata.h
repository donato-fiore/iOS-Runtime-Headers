// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCOLLABORATIONNOTICEMETADATA_H
#define IMCOLLABORATIONNOTICEMETADATA_H

@class NSString, UTType, NSURL, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IMCollaborationNoticeMetadata : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *contentTitle; // ivar: _contentTitle
@property (retain, nonatomic) UTType *contentType; // ivar: _contentType
@property (retain, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (retain, nonatomic) NSString *messageGUID; // ivar: _messageGUID
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSNumber *typeNumber; // ivar: _typeNumber


+(BOOL)supportsSecureCoding;
+(id)metadataWithType:(NSInteger)arg0 bundleIdentifier:(id)arg1 contentURL:(id)arg2 contentTitle:(id)arg3 contentType:(id)arg4 messageGUID:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNoticeType:(NSInteger)arg0 bundleIdentifier:(id)arg1 contentURL:(id)arg2 contentTitle:(id)arg3 contentType:(id)arg4 messageGUID:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif