// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHEURISTICCREATECALENDAREVENTACTIONMAKER_H
#define ATXHEURISTICCREATECALENDAREVENTACTIONMAKER_H

@class NSString;


#import "ATXHeuristicActionMaker.h"
#import "ATXHeuristicObjectHandle.h"

@interface ATXHeuristicCreateCalendarEventActionMaker : ATXHeuristicActionMaker {
    ATXHeuristicObjectHandle *_event;
    NSString *_suggestionsInfoUniqueKey;
}




+(BOOL)supportsSecureCoding;
-(id)_makeAction;
-(id)actionTypeName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 event:(id)arg2 suggestionsInfoUniqueKey:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif