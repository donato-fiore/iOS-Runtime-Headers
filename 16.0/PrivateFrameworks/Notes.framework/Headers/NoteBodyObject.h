// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOTEBODYOBJECT_H
#define NOTEBODYOBJECT_H

@class NSManagedObject, NSString, NSData;
@protocol ICSearchIndexableTarget, ICSearchIndexable;


#import "NoteObject.h"

@interface NoteBodyObject : NSManagedObject <ICSearchIndexableTarget>



@property (retain, nonatomic) NSString *content;
@property (readonly, nonatomic) NSString *contentAsPlainText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *externalContentRef;
@property (retain, nonatomic) NSData *externalRepresentation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NoteObject *owner;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<ICSearchIndexable> *targetSearchIndexable;




@end


#endif