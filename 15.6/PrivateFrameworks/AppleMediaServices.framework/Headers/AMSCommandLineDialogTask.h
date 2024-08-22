// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSCOMMANDLINEDIALOGTASK_H
#define AMSCOMMANDLINEDIALOGTASK_H



#import "AMSTask.h"
#import "AMSDialogRequest.h"

@interface AMSCommandLineDialogTask : AMSTask

@property (nonatomic) NSInteger automaticButtonSelection; // ivar: _automaticButtonSelection
@property (nonatomic) CGFloat dialogPadding; // ivar: _dialogPadding
@property (nonatomic) CGFloat maximumDialogWidth; // ivar: _maximumDialogWidth
@property (nonatomic) CGFloat minimumDialogWidth; // ivar: _minimumDialogWidth
@property (readonly, nonatomic) AMSDialogRequest *request; // ivar: _request


-(NSInteger)_gatherButtonInput;
-(id)_createHorizontolLineWithWidth:(NSInteger)arg0 ;
-(id)_createLinesFromText:(id)arg0 width:(NSInteger)arg1 ;
-(id)_createText:(id)arg0 width:(NSInteger)arg1 centered:(BOOL)arg2 omitLeftPipe:(BOOL)arg3 ;
-(id)_createTextfieldWithTextfield:(id)arg0 width:(NSInteger)arg1 ;
-(id)_gatherTextfieldInput;
-(id)_getUserInput;
-(id)initWithRequest:(id)arg0 ;
-(id)present;
-(void)_printMessage:(id)arg0 ;


@end


#endif