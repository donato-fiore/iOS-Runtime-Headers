// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEATTACHMENTGROUP_H
#define DEATTACHMENTGROUP_H

@class NSArray, NSURL;
@protocol NSSecureCoding;


#import "DEAttachmentItem.h"

@interface DEAttachmentGroup : DEAttachmentItem <NSSecureCoding>



@property (retain, nonatomic) NSArray *attachmentItems; // ivar: _attachmentItems
@property (retain, nonatomic) NSURL *rootURL; // ivar: _rootURL


+(BOOL)supportsSecureCoding;
+(id)createWithName:(id)arg0 rootURL:(id)arg1 ;
+(id)createWithName:(id)arg0 rootURL:(id)arg1 attachmentItems:(id)arg2 ;
-(id)attachToDestinationDir:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif