

#include "CMFileInterface.h"
#include "CMData.h"
#include "CMMessage.h"
#include "CMEvent.h"
#include "CMDataContainer.h"
#include "CVAFeatureBuffer.h"
#include "CVATimedValue.h"
#include "CVAUserEvent.h"
#include "CVACameraCalibration.h"
#include "CVAIMUCalibration.h"
#include "CVACalibration.h"
#include "CVACameraCalibrationData.h"
#include "CVADepthTOF.h"
#include "CVADepthIR.h"
#include "JasperDepthFrameProcessor.h"
#include "CVACLMotionTypeVector3.h"
#include "CVACLMotionTypeDoubleVector3.h"
#include "CVACLMotionTypeVector4.h"
#include "CVACLMotionTypeDoubleVector4.h"
#include "CVACMAccelerometerData.h"
#include "CVACMGyroData.h"
#include "CVACMALSData.h"
#include "CVACMCompassData.h"
#include "CVACMMotionTypeDeviceMotionData.h"
#include "CVACMDeviceMotionData.h"
#include "CVACLLocation.h"
#include "MOVReaderInterface.h"
#include "StreamEncodingObject.h"
#include "TimedBuffer.h"
#include "MOVWriterInterface.h"
#include "MetadataWrapper.h"
#include "CVAPRRangeMeasurement.h"
#include "CVAPRAngleMeasurement.h"
#include "CVAPRDevice.h"
