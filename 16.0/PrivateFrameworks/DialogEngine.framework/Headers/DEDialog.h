// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEDIALOG_H
#define DEDIALOG_H

@class NSString;


#import "DENode.h"
#import "DESpeakableString.h"

@interface DEDialog : DENode

@property shared_ptr<siri::dialogengine::Dialog> This; // ivar: _This
@property DESpeakableString *caption;
@property DESpeakableString *content;
@property (retain) NSString *id;


-(?)initWithSharedPtr;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSelectable:(id)arg0 ;
-(BOOL)validate:(id)arg0 ;
-(id)getExpandedCaption:(id)arg0 ;
-(id)getExpandedContent:(id)arg0 ;
-(id)init;


@end


#endif