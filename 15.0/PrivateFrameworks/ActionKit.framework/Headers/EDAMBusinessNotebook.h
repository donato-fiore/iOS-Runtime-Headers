// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMBUSINESSNOTEBOOK_H
#define EDAMBUSINESSNOTEBOOK_H

@class NSString, NSNumber;


#import "FATObject.h"

@interface EDAMBusinessNotebook : FATObject

@property (retain, nonatomic) NSString *notebookDescription; // ivar: _notebookDescription
@property (retain, nonatomic) NSNumber *privilege; // ivar: _privilege
@property (retain, nonatomic) NSNumber *recommended; // ivar: _recommended


+(id)structFields;
+(id)structName;


@end


#endif