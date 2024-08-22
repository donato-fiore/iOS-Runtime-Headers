// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTYHISTORY_H
#define TTYHISTORY_H

@class NSManagedObject, NSString, NSData, NSNumber;



@interface TTYHistory : NSManagedObject

@property (retain, nonatomic) NSString *callUID;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSNumber *needsCloudKitUpload;
@property (retain, nonatomic) NSNumber *version;




@end


#endif