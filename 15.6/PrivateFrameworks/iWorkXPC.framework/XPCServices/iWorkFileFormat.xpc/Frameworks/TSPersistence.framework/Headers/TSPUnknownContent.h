// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPUNKNOWNCONTENT_H
#define TSPUNKNOWNCONTENT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSPUnknownContent : NSObject {
    NSArray *_preserveMessages;
    NSArray *_preserveUntilModifiedMessages;
    NSArray *_preserveFields;
    NSArray *_preserveUntilModifiedFields;
}




+(BOOL)unknownContent:(id)arg0 hasSameUnknownFieldsAsUnknownContent:(id)arg1 messagePrototype:(struct Message *)arg2 ;
-(BOOL)hasSameUnknownFieldsAsUnknownContent:(id)arg0 messagePrototype:(struct Message *)arg1 ;
-(id)init;
-(id)initWithMessages:(id)arg0 messagesAreDiffs:(BOOL)arg1 preserveFields:(id)arg2 preserveUntilModifiedFields:(id)arg3 ;
-(id)newUnknownContentSnapshot;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)willModifyObject;


@end


#endif