// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APTAPACTION_H
#define APTAPACTION_H

@class NSURL, NSNumber, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface APTapAction : NSObject <NSSecureCoding>



@property NSInteger actionType; // ivar: _actionType
@property (retain) NSURL *actionURL; // ivar: _actionURL
@property (retain) NSNumber *adamIdentifier; // ivar: _adamIdentifier
@property CGFloat confirmedClickInterval; // ivar: _confirmedClickInterval
@property (retain) NSDictionary *iTunesMetadata; // ivar: _iTunesMetadata
@property NSInteger templateType; // ivar: _templateType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif