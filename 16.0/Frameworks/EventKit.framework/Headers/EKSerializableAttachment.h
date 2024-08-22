// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKSERIALIZABLEATTACHMENT_H
#define EKSERIALIZABLEATTACHMENT_H

@class NSString, NSURL;


#import "EKSerializableObject.h"

@interface EKSerializableAttachment : EKSerializableObject

@property (retain, nonatomic) NSString *contentTypeFromServer; // ivar: _contentTypeFromServer
@property (retain, nonatomic) NSURL *urlOnDisk; // ivar: _urlOnDisk


+(id)classesForKey;
-(id)createAttachment;
-(id)initWithAttachment:(id)arg0 ;


@end


#endif