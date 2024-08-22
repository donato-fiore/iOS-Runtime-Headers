// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSENDUSERINTERFACERESULT_H
#define WFSENDUSERINTERFACERESULT_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFSendUserInterfaceResult : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *attachments; // ivar: _attachments
@property (copy, nonatomic) NSString *content; // ivar: _content
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (copy, nonatomic) NSString *subject; // ivar: _subject


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif