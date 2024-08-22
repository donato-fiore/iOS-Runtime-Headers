// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRMUTABLETEXTEDITINGSESSION_H
#define MRMUTABLETEXTEDITINGSESSION_H

@class NSString;


#import "MRTextEditingSession.h"
#import "MRTextEditingAttributes.h"

@interface MRMutableTextEditingSession : MRTextEditingSession

@property (retain, nonatomic) MRTextEditingAttributes *attributes;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (copy, nonatomic) NSString *text;




@end


#endif