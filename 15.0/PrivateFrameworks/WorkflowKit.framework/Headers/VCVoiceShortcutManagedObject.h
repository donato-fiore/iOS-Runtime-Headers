// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVOICESHORTCUTMANAGEDOBJECT_H
#define VCVOICESHORTCUTMANAGEDOBJECT_H

@class NSManagedObject, NSString, NSDate, NSUUID, NSData, NSSet;



@interface VCVoiceShortcutManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateLastModified;
@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) BOOL isMarkedAsDeleted;
@property (retain, nonatomic) NSData *keyImageData;
@property (copy, nonatomic) NSString *phrase;
@property (retain, nonatomic) NSData *serializedWorkflowData;
@property (copy, nonatomic) NSString *shortcutDescription;
@property (copy, nonatomic) NSString *shortcutName;
@property (retain, nonatomic) NSSet *syncStates;


+(id)fetchRequest;


@end


#endif