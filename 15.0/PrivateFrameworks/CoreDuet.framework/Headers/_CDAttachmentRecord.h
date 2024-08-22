// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDATTACHMENTRECORD_H
#define _CDATTACHMENTRECORD_H

@class NSManagedObject, NSUUID, NSString, NSURL, NSDate, NSSet;



@interface _CDAttachmentRecord : NSManagedObject

@property (retain, nonatomic) NSUUID *cloudIdentifier;
@property (retain, nonatomic) NSString *contentText;
@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSSet *interactions;
@property (retain, nonatomic) NSString *photoLocalIdentifier;
@property (nonatomic) NSInteger sizeInBytes;
@property (retain, nonatomic) NSString *uti;




@end


#endif