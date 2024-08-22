// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _KSTEXTREPLACEMENTMANAGEDOBJECT_H
#define _KSTEXTREPLACEMENTMANAGEDOBJECT_H

@class NSManagedObject, NSString, NSData, NSDate;



@interface _KSTextReplacementManagedObject : NSManagedObject

@property (nonatomic) BOOL needsSaveToCloud;
@property (retain, nonatomic) NSString *phrase;
@property (retain, nonatomic) NSData *remoteRecordInfo;
@property (retain, nonatomic) NSString *shortcut;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *uniqueName;
@property (nonatomic) BOOL wasDeleted;




@end


#endif