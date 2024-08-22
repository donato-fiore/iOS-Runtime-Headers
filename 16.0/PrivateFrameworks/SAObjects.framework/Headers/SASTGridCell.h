// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASTGRIDCELL_H
#define SASTGRIDCELL_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUIDecoratedText.h"

@interface SASTGridCell : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIDecoratedText *subTitle;
@property (readonly) Class superclass;
@property (retain, nonatomic) SAUIDecoratedText *title;


+(id)gridCell;
+(id)gridCellWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif