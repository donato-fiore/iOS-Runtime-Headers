// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMRECENTITEM_H
#define IMRECENTITEM_H

@class NSString, NSURL, NSDictionary, NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface IMRecentItem : NSObject

@property (copy, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) NSString *accessibilityString; // ivar: _accessibilityString
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic) NSDictionary *messageItemInfo; // ivar: _messageItemInfo
@property (retain, nonatomic) NSData *payloadData; // ivar: _payloadData
@property (retain, nonatomic) NSNumber *timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asJSONObject;
-(id)initWithGUID:(id)arg0 data:(id)arg1 messageItemInfo:(id)arg2 ;
-(void)dealloc;


@end


#endif